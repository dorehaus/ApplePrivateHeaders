/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CXVoicemailObserverDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * voicemailUUIDToVoicemailMap; 
@required
-(void)invalidate;
-(void)removeDelegate:(id)arg1;
-(void)addDelegate:(id)arg1;
-(NSDictionary *)voicemailUUIDToVoicemailMap;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2;

@end

