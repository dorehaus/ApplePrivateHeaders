/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/Versions/A/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SignpostSerializable <NSObject>
@required
+(id)serializationTypeNumber;
-(id)initWithDictionary:(id)arg1;
-(id)serializeableDictionaryWithShouldRedact:(char)arg1;
-(id)humanReadableType;
-(id)humanReadableDictionaryRepresentation;

@end

