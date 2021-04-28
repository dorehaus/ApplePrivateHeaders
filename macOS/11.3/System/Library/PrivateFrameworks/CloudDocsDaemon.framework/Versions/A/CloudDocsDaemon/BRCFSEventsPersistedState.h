/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying> {

	NSUUID* _streamUUID;
	unsigned long long _latestEventID;
	unsigned long long _rootID;

}

@property (nonatomic,retain) NSUUID * streamUUID;                           //@synthesize streamUUID=_streamUUID - In the implementation block
@property (assign,nonatomic) unsigned long long latestEventID;              //@synthesize latestEventID=_latestEventID - In the implementation block
@property (assign,nonatomic) unsigned long long rootID;                     //@synthesize rootID=_rootID - In the implementation block
+(char)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)rootID;
-(void)setRootID:(unsigned long long)arg1 ;
-(unsigned long long)latestEventID;
-(NSUUID *)streamUUID;
-(id)initWithLatestEventID:(unsigned long long)arg1 streamUUID:(id)arg2 rootID:(unsigned long long)arg3 ;
-(void)setLatestEventID:(unsigned long long)arg1 ;
-(void)setStreamUUID:(NSUUID *)arg1 ;
@end
