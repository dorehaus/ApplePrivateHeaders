/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {

	NSData* _backingData;
	NSData* _superdata;

}
+(unsigned)dataChunkType;
+(id)chunkOfType:(unsigned)arg1 data:(id)arg2 superdata:(id)arg3 ;
+(id)chunksFromFileAtPath:(id)arg1 ;
+(id)chunksFromData:(id)arg1 ;
+(id)serializeChunks:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)setSuperdata:(id)arg1 ;
@end

