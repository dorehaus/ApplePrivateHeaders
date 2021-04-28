/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/Contents/MacOS/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CFServiceHelper;

@interface CFRequestHandler : NSObject {

	CFServiceHelper* _serviceHelper;

}

@property (retain) CFServiceHelper * serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(CFServiceHelper *)serviceHelper;
-(void)setServiceHelper:(CFServiceHelper *)arg1 ;
-(void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3 ;
-(char)isTimeoutDisabled;
@end

