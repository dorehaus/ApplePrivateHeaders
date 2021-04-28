/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class _EARTokenizer;

@interface _EARTextNormalization : NSObject {

	_EARTokenizer* _tokenizer;
	unique_ptr<quasar::Munger, std::__1::default_delete<quasar::Munger>>* _munger;

}
-(id)init;
-(id)normalize:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 ;
-(id)tokenize:(id)arg1 ;
-(id)munge:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 mungeRuleFile:(id)arg2 ;
-(id)initWithNcsRoot:(id)arg1 mungeRules:(id)arg2 ;
-(id)initWithMungeRules:(id)arg1 ;
@end
