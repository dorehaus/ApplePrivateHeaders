/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiFoundation/EMFAbstractIndexStrategy.h>

@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy
-(id)termsForDocument:(id)arg1 ;
-(id)postingsForTerm:(id)arg1 ;
-(id)commonDocumentsForTerms:(id)arg1 ;
-(double)_calculateCumulativeTermWeightForQueryTokenCounts:(id)arg1 inDocumentID:(id)arg2 ;
-(id)termWeightForTerm:(id)arg1 inDocument:(id)arg2 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1 ;
@end

