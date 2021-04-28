/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKImageEditFrame, IKTabView, IKImageEditView, IKImageEditDSHandler;

@interface IKImageEditPanelPrivateData : NSObject {

	IKImageEditFrame* _backgroundView;
	id _imageView;
	IKTabView* _tabView;
	IKImageEditView* _currentTab;
	CGPoint _mouseDownLocation;
	char _mouseDownMovesWindow;
	IKImageEditDSHandler* _dsHandler;
	id _dataSource;
	char _dataSourceIsIKImageView;
	char _hasAdjustMode;
	char _hasEffectsMode;
	char _hasDetailsMode;

}

@property (assign) IKImageEditFrame * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign) id imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign) id dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) IKTabView * tabView;                            //@synthesize tabView=_tabView - In the implementation block
@property (assign) IKImageEditView * currentTab;                   //@synthesize currentTab=_currentTab - In the implementation block
@property (assign) IKImageEditDSHandler * dsHandler;               //@synthesize dsHandler=_dsHandler - In the implementation block
@property (assign) CGPoint mouseDownLocation;                      //@synthesize mouseDownLocation=_mouseDownLocation - In the implementation block
@property (assign) char mouseDownMovesWindow;                      //@synthesize mouseDownMovesWindow=_mouseDownMovesWindow - In the implementation block
@property (assign) char dataSourceIsIKImageView;                   //@synthesize dataSourceIsIKImageView=_dataSourceIsIKImageView - In the implementation block
@property (assign) char hasAdjustMode;                             //@synthesize hasAdjustMode=_hasAdjustMode - In the implementation block
@property (assign) char hasEffectsMode;                            //@synthesize hasEffectsMode=_hasEffectsMode - In the implementation block
@property (assign) char hasDetailsMode;                            //@synthesize hasDetailsMode=_hasDetailsMode - In the implementation block
-(IKImageEditDSHandler *)dsHandler;
-(void)setDataSourceIsIKImageView:(char)arg1 ;
-(char)dataSourceIsIKImageView;
-(void)setDsHandler:(IKImageEditDSHandler *)arg1 ;
-(CGPoint)mouseDownLocation;
-(void)setMouseDownLocation:(CGPoint)arg1 ;
-(char)hasAdjustMode;
-(void)setHasAdjustMode:(char)arg1 ;
-(char)hasEffectsMode;
-(void)setHasEffectsMode:(char)arg1 ;
-(char)hasDetailsMode;
-(void)setHasDetailsMode:(char)arg1 ;
-(id)dataSource;
-(void)setDataSource:(id)arg1 ;
-(void)setBackgroundView:(IKImageEditFrame *)arg1 ;
-(IKImageEditFrame *)backgroundView;
-(IKTabView *)tabView;
-(void)setTabView:(IKTabView *)arg1 ;
-(id)imageView;
-(void)setImageView:(id)arg1 ;
-(IKImageEditView *)currentTab;
-(void)setCurrentTab:(IKImageEditView *)arg1 ;
-(char)mouseDownMovesWindow;
-(void)setMouseDownMovesWindow:(char)arg1 ;
@end

