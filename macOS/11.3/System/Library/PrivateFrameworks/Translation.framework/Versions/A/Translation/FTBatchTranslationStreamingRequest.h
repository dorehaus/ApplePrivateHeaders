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

@class NSMutableDictionary, NSData, FTBatchTranslationRequest, FTBatchTranslationFeedbackRequest;

@interface FTBatchTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTBatchTranslationRequest * contentAsFTBatchTranslationRequest; 
@property (nonatomic,readonly) FTBatchTranslationFeedbackRequest * contentAsFTBatchTranslationFeedbackRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationStreamingRequest*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationStreamingRequest*)arg2 ;
-(long long)content_type;
-(FTBatchTranslationRequest *)contentAsFTBatchTranslationRequest;
-(FTBatchTranslationFeedbackRequest *)contentAsFTBatchTranslationFeedbackRequest;
@end

