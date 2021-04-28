/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTAlignment;

@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TranslationToken* _root;

}

@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) float confidence; 
@property (nonatomic,readonly) FTAlignment * mt_alignment; 
@property (nonatomic,readonly) BOOL add_space_after; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(float)confidence;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationToken*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationToken*)arg2 ;
-(BOOL)add_space_after;
-(FTAlignment *)mt_alignment;
@end

