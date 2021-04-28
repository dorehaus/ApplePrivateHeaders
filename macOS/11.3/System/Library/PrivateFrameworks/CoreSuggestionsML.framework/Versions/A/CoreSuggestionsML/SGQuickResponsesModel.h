/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/Versions/A/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMLMultiLabelClassifierProtocol;
@class SGQuickResponsesTransformerInstance;

@interface SGQuickResponsesModel : NSObject {

	id<PMLMultiLabelClassifierProtocol> _model;
	SGQuickResponsesTransformerInstance* _transformer;

}
+(char)shouldSampleForLabel:(id)arg1 inLanguage:(id)arg2 isDynamicLabel:(char)arg3 ;
+(id)labelOf:(id)arg1 inLanguage:(id)arg2 ;
+(id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 ;
+(id)modelForLanguage:(id)arg1 mode:(unsigned long long)arg2 chunkPath:(id)arg3 plistPath:(id)arg4 ;
+(id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(id)labelOf:(id)arg1 withLabeler:(id)arg2 ;
+(id)featuresOf:(id)arg1 withFeaturizer:(id)arg2 source:(id)arg3 ;
+(id)configForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(id)featuresOf:(id)arg1 inLanguage:(id)arg2 andMode:(unsigned long long)arg3 ;
+(id)modelForEntity:(id)arg1 type:(id)arg2 mode:(unsigned long long)arg3 language:(id)arg4 class:(Class)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 ;
+(id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(void)setGlobalTransformerForTesting:(id)arg1 ;
-(id)config;
-(id)predict:(id)arg1 ;
-(void)setTransformer:(id)arg1 ;
-(id)featuresOf:(id)arg1 ;
-(id)labelOf:(id)arg1 ;
-(char)shouldSampleForLabel:(id)arg1 isDynamicLabel:(char)arg2 ;
-(id)initWithLazyMultiLabelModel:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 plistPath:(id)arg4 ;
@end

