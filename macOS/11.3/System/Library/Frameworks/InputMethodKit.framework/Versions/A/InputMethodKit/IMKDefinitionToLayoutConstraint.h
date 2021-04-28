/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMKDefinitionToLayoutConstraint : NSObject {

	double _maxWidth;
	double _minWidth;
	double _maxHeight;
	double _minHeight;
	unsigned long long _maxNumberOfCandidatesPerLine;
	double _minimumCellLineSize;
	unsigned long long _numberOfSimilarWidthCandidates;
	char _shouldAddExtraLine;
	char _optimizedLayoutForFixedSize;

}

@property (assign,nonatomic) double maxWidth;                                                //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) double minWidth;                                                //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) double maxHeight;                                               //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) double minHeight;                                               //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfCandidatesPerLine;                //@synthesize maxNumberOfCandidatesPerLine=_maxNumberOfCandidatesPerLine - In the implementation block
@property (assign,nonatomic) double minimumCellLineSize;                                     //@synthesize minimumCellLineSize=_minimumCellLineSize - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSimilarWidthCandidates;              //@synthesize numberOfSimilarWidthCandidates=_numberOfSimilarWidthCandidates - In the implementation block
@property (assign,nonatomic) char shouldAddExtraLine;                                        //@synthesize shouldAddExtraLine=_shouldAddExtraLine - In the implementation block
@property (assign,nonatomic) char optimizedLayoutForFixedSize;                               //@synthesize optimizedLayoutForFixedSize=_optimizedLayoutForFixedSize - In the implementation block
-(void)setOptimizedLayoutForFixedSize:(char)arg1 ;
-(void)setMinimumCellLineSize:(double)arg1 ;
-(void)setMaxNumberOfCandidatesPerLine:(unsigned long long)arg1 ;
-(void)setShouldAddExtraLine:(char)arg1 ;
-(unsigned long long)numberOfSimilarWidthCandidates;
-(void)setNumberOfSimilarWidthCandidates:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfCandidatesPerLine;
-(double)minimumCellLineSize;
-(char)optimizedLayoutForFixedSize;
-(char)shouldAddExtraLine;
-(void)setMinWidth:(double)arg1 ;
-(double)minWidth;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
@end
