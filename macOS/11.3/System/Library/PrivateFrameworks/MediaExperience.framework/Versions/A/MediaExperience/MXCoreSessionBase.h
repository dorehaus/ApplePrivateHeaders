/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MXCoreSessionBaseStateProtocol.h>
#import <libobjc.A.dylib/MXCoreSessionBaseConfigurationProtocol.h>

@class NSString;

@interface MXCoreSessionBase : NSObject <MXCoreSessionBaseStateProtocol, MXCoreSessionBaseConfigurationProtocol> {

	char _isActive;
	char _isPlaying;
	unsigned _audioSessionID;
	int _clientPID;
	int _coreSessionType;
	unsigned long long _mxSessionIDCounter;
	long long _ID;
	NSString* _clientName;
	NSString* _displayID;
	NSString* _routingContextUUID;
	NSString* _audioCategory;
	NSString* _audioMode;

}

@property (assign,nonatomic) char isActive;                                      //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) char isPlaying;                                     //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) unsigned long long mxSessionIDCounter;              //@synthesize mxSessionIDCounter=_mxSessionIDCounter - In the implementation block
@property (assign,nonatomic) long long ID;                                       //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                            //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) int clientPID;                                      //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSString * clientName;                              //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSString * displayID;                               //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,retain) NSString * routingContextUUID;                      //@synthesize routingContextUUID=_routingContextUUID - In the implementation block
@property (nonatomic,retain) NSString * audioCategory;                           //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,retain) NSString * audioMode;                               //@synthesize audioMode=_audioMode - In the implementation block
@property (assign,nonatomic) int coreSessionType;                                //@synthesize coreSessionType=_coreSessionType - In the implementation block
-(unsigned long long)mxSessionIDCounter;
-(void)setMxSessionIDCounter:(unsigned long long)arg1 ;
-(void)setRoutingContextUUID:(NSString *)arg1 ;
-(int)coreSessionType;
-(void)setCoreSessionType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(id)info;
-(NSString *)displayID;
-(void)setIsActive:(char)arg1 ;
-(char)isPlaying;
-(NSString *)clientName;
-(NSString *)audioCategory;
-(void)setAudioCategory:(NSString *)arg1 ;
-(long long)ID;
-(NSString *)routingContextUUID;
-(unsigned)audioSessionID;
-(void)setClientName:(NSString *)arg1 ;
-(void)setDisplayID:(NSString *)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(int)clientPID;
-(void)setClientPID:(int)arg1 ;
-(void)setID:(long long)arg1 ;
-(NSString *)audioMode;
-(void)setAudioMode:(NSString *)arg1 ;
-(void)setIsPlaying:(char)arg1 ;
@end
