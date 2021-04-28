/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CRTextDecoding.h>

@class CRRecognizerConfiguration, NSLocale, CRTextSequenceRecognizerModel, CRRegex, NSOrderedSet, NSString;

@interface CRTextDecoderCTCV2 : NSObject <CRTextDecoding> {

	BOOL _shouldUseLM;
	CRRecognizerConfiguration* _configuration;
	NSLocale* _locale;
	CRTextSequenceRecognizerModel* _model;
	CRRegex* _regExpressions;
	NSOrderedSet* _characterObservations;

}

@property (nonatomic,readonly) NSLocale * locale;                                 //@synthesize locale=_locale - In the implementation block
@property (retain) CRTextSequenceRecognizerModel * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) CRRegex * regExpressions;                            //@synthesize regExpressions=_regExpressions - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLM;                                    //@synthesize shouldUseLM=_shouldUseLM - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * characterObservations;              //@synthesize characterObservations=_characterObservations - In the implementation block
@property (retain) CRRecognizerConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedLanguages;
-(void)dealloc;
-(NSLocale *)locale;
-(CRRecognizerConfiguration *)configuration;
-(void)setConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(CRTextSequenceRecognizerModel *)model;
-(void)setModel:(CRTextSequenceRecognizerModel *)arg1 ;
-(NSOrderedSet *)characterObservations;
-(BOOL)shouldUseLM;
-(void)decodeOutput:(id)arg1 imageSize:(CGSize)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
-(char)shouldDecodeWithLM;
-(CRRegex *)regExpressions;
-(void)setRegExpressions:(CRRegex *)arg1 ;
-(void)setShouldUseLM:(BOOL)arg1 ;
@end
