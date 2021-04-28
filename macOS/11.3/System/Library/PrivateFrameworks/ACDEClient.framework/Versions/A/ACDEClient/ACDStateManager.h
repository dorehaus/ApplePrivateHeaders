/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACDBaseViewController, NSWindow, NSArray;

@interface ACDStateManager : NSObject {

	ACDBaseViewController* _presentViewController;
	NSWindow* _window;
	NSArray* _constraints;

}

@property (nonatomic,retain) NSArray * constraints;                                      //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) ACDBaseViewController * presentViewController;              //@synthesize presentViewController=_presentViewController - In the implementation block
@property (assign,nonatomic) NSWindow * window;                                          //@synthesize window=_window - In the implementation block
-(void)dealloc;
-(NSWindow *)window;
-(void)setWindow:(NSWindow *)arg1 ;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(ACDBaseViewController *)presentViewController;
-(void)setCurrentViewController:(id)arg1 ;
-(void)setPresentViewController:(ACDBaseViewController *)arg1 ;
-(void)removeConstraints;
-(void)setCurrentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addConstraintsToView:(id)arg1 ;
@end

