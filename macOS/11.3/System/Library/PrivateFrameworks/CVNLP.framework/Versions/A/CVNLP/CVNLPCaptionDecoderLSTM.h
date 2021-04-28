/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/Versions/A/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionDecoder.h>

@class NSDictionary;

@interface CVNLPCaptionDecoderLSTM : CVNLPCaptionDecoder {

	int startID;
	int endID;
	int maxCaptionLen;
	int beamSize;
	int vocabSize;
	NSDictionary* vocab;
	void* _decoderPlan;
	void* decoderCtx;
	SCD_Struct_CV1* decoderNet;
	SCD_Struct_CV2* meanFeatsPlaceholderBlob;
	SCD_Struct_CV2* attFeatsPlaceholderBlob;
	SCD_Struct_CV2* pAttFeatsPlaceholderBlob;
	SCD_Struct_CV2* lstmAttStateFeedBlob;
	SCD_Struct_CV2* lstmLangStateFeedBlob;
	SCD_Struct_CV2* inWordIDBlob;
	SCD_Struct_CV2* wordIDBlob;
	SCD_Struct_CV2* langProbBlob;
	SCD_Struct_CV2* newAttStateBlob;
	SCD_Struct_CV2* newLangStateBlob;
	CVNLPBeamSearchRef _beamSearch;
	BOOL meanFeaturesPresent;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2 ;
-(id)packBeamID:(id)arg1 tokenID:(id)arg2 lstmAttnState:(SCD_Struct_CV2*)arg3 lstmLangState:(SCD_Struct_CV2*)arg4 softmax:(SCD_Struct_CV2*)arg5 ;
-(void)extractBeamID:(id*)arg1 tokenID:(id*)arg2 lstmAttnState:(SCD_Struct_CV2*)arg3 lstmLangState:(SCD_Struct_CV2*)arg4 fromFollowup:(id)arg5 ;
@end

