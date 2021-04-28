/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/Versions/A/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRLexiconCorrection : NSObject {

	unsigned _tokenID;
	double _score;
	unsigned long long _errorType;

}

@property (readonly) unsigned tokenID;                          //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) double score;                              //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long errorType;              //@synthesize errorType=_errorType - In the implementation block
-(id)description;
-(double)score;
-(unsigned)tokenID;
-(unsigned long long)errorType;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 errorType:(unsigned long long)arg3 ;
@end

