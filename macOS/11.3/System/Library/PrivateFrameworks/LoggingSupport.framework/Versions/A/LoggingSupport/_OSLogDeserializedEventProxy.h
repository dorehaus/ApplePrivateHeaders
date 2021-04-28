/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSLogEventProxy.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {

	char _unixDateNeedsLookup;
	char _unixTimeZoneNeedsLookup;
	timezone _unixTimeZone;
	timeval _unixDate;
	char _lossStartUnixDateNeedsLookup;
	char _lossStartUnixTimeZoneNeedsLookup;
	timeval _lossStartUnixDate;
	timezone _lossStartUnixTimeZone;
	char _lossEndUnixDateNeedsLookup;
	char _lossEndUnixTimeZoneNeedsLookup;
	timeval _lossEndUnixDate;
	timezone _lossEndUnixTimeZone;
	char _needsTypeLookup;
	NSDictionary* _curEventDictionary;
	_OSLogEventSerializationMetadata* _metadata;
	unsigned long long _type;

}

@property (nonatomic,retain) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDictionary * curEventDictionary;                        //@synthesize curEventDictionary=_curEventDictionary - In the implementation block
@property (assign,nonatomic) char needsTypeLookup;                                     //@synthesize needsTypeLookup=_needsTypeLookup - In the implementation block
-(NSDictionary *)curEventDictionary;
-(char)needsTypeLookup;
-(void)_resetNeedsLookup;
-(void)setCurEventDictionary:(NSDictionary *)arg1 ;
-(void)_populate_timeval:(timeval*)arg1 withDict:(id)arg2 ;
-(void)_populate_timezone:(timezone*)arg1 withDict:(id)arg2 ;
-(id)_frameForDict:(id)arg1 ;
-(void)setNeedsTypeLookup:(char)arg1 ;
-(unsigned long long)size;
-(unsigned long long)type;
-(id)date;
-(id)timeZone;
-(int)processIdentifier;
-(id)category;
-(id)sender;
-(_OSLogEventSerializationMetadata *)metadata;
-(unsigned long long)timeToLive;
-(void)setMetadata:(_OSLogEventSerializationMetadata *)arg1 ;
-(id)process;
-(unsigned long long)threadIdentifier;
-(unsigned long long)activityIdentifier;
-(unsigned long long)signpostType;
-(id)subsystem;
-(id)formatString;
-(id)backtrace;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(id)decomposedMessage;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)machContinuousTimestamp;
-(timeval*)unixDate;
-(timezone*)unixTimeZone;
-(id)signpostName;
-(id)composedMessage;
-(unsigned long long)signpostIdentifier;
-(unsigned long long)signpostScope;
-(unsigned long long)logType;
-(id)processImageUUID;
-(id)processImagePath;
-(id)bootUUID;
-(id)senderImagePath;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)creatorActivityIdentifier;
-(id)senderImageUUID;
-(SCD_Struct_OS0)lossCount;
-(const char*)senderImageUUIDBytes;
-(const char*)processImageUUIDBytes;
-(unsigned long long)senderImageOffset;
-(timezone*)lossEndUnixTimeZone;
-(timeval*)lossEndUnixDate;
-(timezone*)lossStartUnixTimeZone;
-(timeval*)lossStartUnixDate;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(unsigned long long)traceIdentifier;
-(unsigned long long)transitionActivityIdentifier;
@end

