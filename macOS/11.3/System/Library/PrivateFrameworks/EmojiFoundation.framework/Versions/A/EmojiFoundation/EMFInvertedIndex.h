/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EMFIndexStrategy;
@class NSDictionary, NSURL, NSBundle;

@interface EMFInvertedIndex : NSObject {

	NSDictionary* _termIndex;
	NSDictionary* _documentIndex;
	NSURL* _termIndexURL;
	NSURL* _documentIndexURL;
	NSBundle* _assetBundle;
	id<EMFIndexStrategy> _strategy;

}

@property (nonatomic,retain) NSDictionary * termIndex;                   //@synthesize termIndex=_termIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * documentIndex;               //@synthesize documentIndex=_documentIndex - In the implementation block
@property (nonatomic,retain) NSURL * termIndexURL;                       //@synthesize termIndexURL=_termIndexURL - In the implementation block
@property (nonatomic,retain) NSURL * documentIndexURL;                   //@synthesize documentIndexURL=_documentIndexURL - In the implementation block
@property (nonatomic,retain) NSBundle * assetBundle;                     //@synthesize assetBundle=_assetBundle - In the implementation block
@property (nonatomic,retain) id<EMFIndexStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
-(id<EMFIndexStrategy>)strategy;
-(void)setStrategy:(id<EMFIndexStrategy>)arg1 ;
-(NSDictionary *)termIndex;
-(void)setTermIndex:(NSDictionary *)arg1 ;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(NSDictionary *)documentIndex;
-(id)termsForDocument:(id)arg1 ;
-(id)postingsForTerm:(id)arg1 ;
-(id)commonDocumentsForTerms:(id)arg1 ;
-(id)termWeightForTerm:(id)arg1 inDocument:(id)arg2 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1 ;
-(id)initWithTermIndex:(id)arg1 andDocumentIndex:(id)arg2 ;
-(void)setDocumentIndex:(NSDictionary *)arg1 ;
-(NSURL *)termIndexURL;
-(NSURL *)documentIndexURL;
-(void)setTermIndexURL:(NSURL *)arg1 ;
-(void)setDocumentIndexURL:(NSURL *)arg1 ;
@end

