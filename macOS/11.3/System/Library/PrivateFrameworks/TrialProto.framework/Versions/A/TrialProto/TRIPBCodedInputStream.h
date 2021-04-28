/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrialProto/TrialProto-Structs.h>
@class NSData;

@interface TRIPBCodedInputStream : NSObject {

	TRIPBCodedInputStreamState state_;
	NSData* buffer_;

}
+(id)streamWithData:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(char)isAtEnd;
-(unsigned long long)position;
-(double)readDouble;
-(float)readFloat;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
-(id)readString;
-(int)readSInt32;
-(unsigned)readUInt32;
-(unsigned long long)readUInt64;
-(void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)checkLastTagWas:(int)arg1 ;
-(char)skipField:(int)arg1 ;
-(void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4 ;
-(void)readUnknownGroup:(int)arg1 message:(id)arg2 ;
-(void)skipMessage;
-(int)readTag;
-(unsigned long long)pushLimit:(unsigned long long)arg1 ;
-(void)popLimit:(unsigned long long)arg1 ;
-(char)readBool;
-(id)readBytes;
-(int)readEnum;
-(int)readSFixed32;
-(long long)readSFixed64;
-(long long)readSInt64;
@end

