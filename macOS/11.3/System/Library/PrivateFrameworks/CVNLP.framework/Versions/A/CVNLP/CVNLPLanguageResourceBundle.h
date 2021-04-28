/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/Versions/A/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CVNLPDecodingLexicons, CVNLPDecodingLanguageModel;

@interface CVNLPLanguageResourceBundle : NSObject {

	CVNLPDecodingLexicons* _lexicons;
	CVNLPDecodingLanguageModel* _characterLanguageModel;
	CVNLPDecodingLanguageModel* _wordLanguageModel;

}

@property (nonatomic,readonly) CVNLPDecodingLexicons * lexicons;                                 //@synthesize lexicons=_lexicons - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * characterLanguageModel;              //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * wordLanguageModel;                   //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
-(CVNLPDecodingLexicons *)lexicons;
-(id)packagedLexiconRootCursors;
-(id)initWithLexicons:(id)arg1 characterLanguageModel:(id)arg2 wordLanguageModel:(id)arg3 ;
-(id)packagedLexiconCursorsUsingContext:(id)arg1 ;
-(CVNLPDecodingLanguageModel *)characterLanguageModel;
-(CVNLPDecodingLanguageModel *)wordLanguageModel;
@end

