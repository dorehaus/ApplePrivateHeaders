/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPDevices.framework/Versions/A/AMPDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPDevices/AMPDevices-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>

@class NSTextField, NSTableView, NSScrollView, NSButton, NSString, NSArray;

@interface DeviceErrorReportViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {

	char _hideSaveButton;
	NSTextField* _messageTextField;
	NSTextField* _explanationTextField;
	NSTableView* _tableView;
	NSScrollView* _scrollView;
	NSButton* _saveButton;
	NSButton* _cancelButton;
	NSButton* _okButton;
	NSButton* _disclosureTriangleButton;
	NSTextField* _numberOfErrorsTextField;
	NSString* _okButtonTitle;
	NSString* _cancelButtonTitle;
	NSString* _windowTitle;
	NSString* _defaultFileName;
	NSArray* _errors;
	NSArray* _errorNodes;

}

@property (nonatomic,retain) NSArray * errorNodes;                                      //@synthesize errorNodes=_errorNodes - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * messageTextField;                     //@synthesize messageTextField=_messageTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * explanationTextField;                 //@synthesize explanationTextField=_explanationTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) NSScrollView * scrollView;                          //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) NSButton * saveButton;                              //@synthesize saveButton=_saveButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * cancelButton;                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * okButton;                                //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * disclosureTriangleButton;                //@synthesize disclosureTriangleButton=_disclosureTriangleButton - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * numberOfErrorsTextField;              //@synthesize numberOfErrorsTextField=_numberOfErrorsTextField - In the implementation block
@property (nonatomic,retain) NSString * okButtonTitle;                                  //@synthesize okButtonTitle=_okButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * cancelButtonTitle;                              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * windowTitle;                                    //@synthesize windowTitle=_windowTitle - In the implementation block
@property (assign,nonatomic) char hideSaveButton;                                       //@synthesize hideSaveButton=_hideSaveButton - In the implementation block
@property (nonatomic,retain) NSString * defaultFileName;                                //@synthesize defaultFileName=_defaultFileName - In the implementation block
@property (nonatomic,retain) NSArray * errors;                                          //@synthesize errors=_errors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSScrollView *)scrollView;
-(NSTableView *)tableView;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(NSButton *)okButton;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(void)setTableView:(NSTableView *)arg1 ;
-(NSString *)windowTitle;
-(void)setDefaultFileName:(NSString *)arg1 ;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(NSTextField *)messageTextField;
-(void)setMessageTextField:(NSTextField *)arg1 ;
-(NSString *)defaultFileName;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(void)setWindowTitle:(NSString *)arg1 ;
-(void)setOkButton:(NSButton *)arg1 ;
-(void)loadModel;
-(NSString *)cancelButtonTitle;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)okButtonTitle;
-(void)setOkButtonTitle:(NSString *)arg1 ;
-(char)hideSaveButton;
-(NSButton *)saveButton;
-(void)configureWindowButtons;
-(void)returnCode:(long long)arg1 ;
-(void)clickOKButton:(id)arg1 ;
-(void)clickCancelButton:(id)arg1 ;
-(void)clickSaveButton:(id)arg1 ;
-(void)setSaveButton:(NSButton *)arg1 ;
-(void)setHideSaveButton:(char)arg1 ;
-(NSTextField *)numberOfErrorsTextField;
-(NSButton *)disclosureTriangleButton;
-(void)setupTopFieldsWithRow:(long long)arg1 ;
-(void)setErrorNodes:(NSArray *)arg1 ;
-(NSArray *)errorNodes;
-(NSTextField *)explanationTextField;
-(id)displayableStringWithNode:(id)arg1 ;
-(id)errorReport;
-(void)clickDisclosureTriangle:(id)arg1 ;
-(void)setExplanationTextField:(NSTextField *)arg1 ;
-(void)setDisclosureTriangleButton:(NSButton *)arg1 ;
-(void)setNumberOfErrorsTextField:(NSTextField *)arg1 ;
@end

