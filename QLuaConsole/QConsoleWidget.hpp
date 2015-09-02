#ifndef __Q__CONSOLE__0x00__
#define __Q__CONSOLE__0x00__

#include <array>
#include <list>
#include <QImage>
#include <QList>
#include <QTextEdit>
#include <QString>
#include <QTime>

class QAction;
class QMenu;

class    QConsoleWidgetCommand {
public:
	QString command;
};

typedef QTextEdit QConsoleWidgetParent ;
class QConsoleWidgetPrivate;
class QConsoleWidget :
        public QConsoleWidgetParent
{
    Q_OBJECT
public:

    explicit QConsoleWidget(QWidget * =0);
	virtual ~QConsoleWidget();

	void setPrompt(const QString &v);
	const QString & getPrompt()const { return prompt_; }
	
	const QTextCharFormat & getInnerCharFormat()const;
	QImage getBackGroundPicture();
	QColor getBackGroundPictureLastColor();

private:
    /*提示符的开始*/
	int promptBeginPos_ = 0;
    /*提示符的结束*/
    int promptEndPos_ = 0;
    /*是否处于执行状态*/
    bool isEvaling_ = false;
    /*提示符*/
    QString prompt_;
    /*命令*/
	QList< QConsoleWidgetCommand > commands;
    /*私有数据*/
    QConsoleWidgetPrivate * thisp;
    /*鼠标行为*/
    std::array<QAction *, 8 > mouseActions;
    /*鼠标菜单*/
    std::array<QMenu *, 5> mouseMenus;
	
    /*私有函数     */
	class UnNameFunction;
	template<
		typename ReturnType,
		typename FunctionName= UnNameFunction,
		typename ...Args>
	static ReturnType _pf(QConsoleWidget *,Args...);
    /*const私有函数*/
	template<
		typename ReturnType,
		typename FunctionName= UnNameFunction,
		typename ...Args>
	static ReturnType _cpf(const QConsoleWidget *, Args...);

protected:
	enum class IsVBarShow:char{
		no,yes,unknow
	};
	IsVBarShow isVBarShow = IsVBarShow::no ;
    void showEvent(QShowEvent *) override;
    void resizeEvent(QResizeEvent *e) override;
	void keyPressEvent(QKeyEvent * e) override;
	void mousePressEvent(QMouseEvent *e) override;
    void contextMenuEvent(QContextMenuEvent * event);
    void paintEvent(QPaintEvent *e)override;
    void dragEnterEvent(QDragEnterEvent *e)override;
    void dragMoveEvent(QDragMoveEvent *e)override;
    void dropEvent(QDropEvent *e)override;
	bool eventFilter(QObject *, QEvent *)override;
public slots:
    /*开始执行*/
	void beginEvals();
    /*结束执行*/
    void endEvals();
    /*更新字符串*/
    void updateCharFormat();
private:
    bool isLogFileSet = false;
	bool needClear__ = true;
    QString logFile;
public slots:
    /* 设置日志文件 */
    void setLogFile(const QString & log_){
        if(log_==logFile){return;}
        logFile = log_;
        if(logFile.isEmpty()==false){
            isLogFileSet=true;
        }
    }
    /* 保存日志 并清屏 */
    void saveAndClear();
    void saveAndClear(const QString & log_){
        setLogFile(log_);
        saveAndClear();
    }
public slots:
    /*
	内部命令
	:clear 清屏并保存
	:clear fileName 清屏并保存到指定文件
	*/
	void innerEvals( QList<QConsoleWidgetCommand > );
public:
    QString getLogFile()const{return logFile;}
	bool isEvaling() const{ return isEvaling_; }
public:
	typedef void(QConsoleWidget::*EvalsType)(QList<QConsoleWidgetCommand >);
	typedef QList<QConsoleWidgetCommand > Commands;
	static EvalsType getEvalsFunction() { return &QConsoleWidget::evals ; }
signals:
	void evals(QList<QConsoleWidgetCommand >);
 
};


class QConsole : public QWidget {
	Q_OBJECT
public:
	~QConsole();
	explicit QConsole(QWidget * =0);
 
	void insertText(
		const QString &,
		const QTextCharFormat &
		);
	void insertText(const QString &);
	bool isEvaling() const { return thisp->isEvaling(); }
	const QTextCharFormat & textCharFormate() const
	{return thisp->getInnerCharFormat(); }
private:
	QConsoleWidget * thisp;
	bool isInsertText_ = false;
	void postInsertEvent_();
protected:
	void paintEvent(QPaintEvent *e)override;
public:
	typedef void(QConsole::*EvalsType)(QList<QConsoleWidgetCommand >);
	typedef QList<QConsoleWidgetCommand > Commands;
	static EvalsType getEvalsFunction() { return &QConsole::evals; }
signals:
	void evals(QList<QConsoleWidgetCommand >);

};

#endif
