/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/Versions/A/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@protocol PMLTransformerProtocol;
@class NSString;

@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol> {

	id<PMLTransformerProtocol> _transformer;
	NSString* _inputKey;

}

@property (retain) id<PMLTransformerProtocol> transformer;              //@synthesize transformer=_transformer - In the implementation block
@property (retain) NSString * inputKey;                                 //@synthesize inputKey=_inputKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTransformer:(id)arg1 appliedToInputKey:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)transform:(id)arg1 ;
-(id<PMLTransformerProtocol>)transformer;
-(void)setInputKey:(NSString *)arg1 ;
-(NSString *)inputKey;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(void)setTransformer:(id<PMLTransformerProtocol>)arg1 ;
-(id)initWithTransformer:(id)arg1 appliedToInputKey:(id)arg2 ;
-(char)isEqualToSGSelectiveTransformer:(id)arg1 ;
@end

