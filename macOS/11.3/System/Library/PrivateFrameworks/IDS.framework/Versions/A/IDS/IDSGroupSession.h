/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSGroupSession, NSString;

@interface IDSGroupSession : NSObject {

	_IDSGroupSession* _internal;

}

@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
+(void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(unsigned)state;
-(id)_internal;
-(NSString *)destination;
-(void)setPreferences:(id)arg1 ;
-(NSString *)sessionID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(unsigned)sessionEndedReason;
-(id)_internal_sessionWithValidityCheck;
-(void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(char)arg3 ;
-(void)updateParticipantData:(id)arg1 withContext:(id)arg2 ;
-(void)setParticipantInfo:(id)arg1 ;
-(void)joinWithOptions:(id)arg1 ;
-(void)leaveGroupSession;
-(void)requestActiveParticipants;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3 ;
@end

