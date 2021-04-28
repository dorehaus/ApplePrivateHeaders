/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroup.h>

@class NSArray;

@interface CHTextLineStrokeGroup : CHStrokeGroup {

	NSArray* _writingDirectionSortedSubstrokes;
	CGVector _averageWritingOrientation;
	CGVector _averageStrokeDeviation;
	vector<CGVector, std::__1::allocator<CGVector>>* _localStrokeWritingOrientations;
	long long _lastSubstrokeIndexBeforeMerge;
	NSArray* _coalescedLastSubstrokes;
	NSArray* _writingDirectionSortedStrokeIdentifiers;

}

@property (nonatomic,retain,readonly) NSArray * writingDirectionSortedStrokeIdentifiers;              //@synthesize writingDirectionSortedStrokeIdentifiers=_writingDirectionSortedStrokeIdentifiers - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const CGPathRef)newEstimatedBaselineForStrokesWithIdentifiers:(id)arg1 estimatedDescenderLocations:(id)arg2 ;
-(CGVector)averageWritingOrientation;
-(id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(CGVector)arg8 averageStrokeDeviation:(CGVector)arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector>>*)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(double)arg13 firstStrokeOrigin:(CGPoint)arg14 ;
-(id)writingDirectionSortedSubstrokes;
-(CGPathRef)newEstimatedBaselineForSubStrokes:(id)arg1 estimatedDescenderLocations:(id)arg2 ;
-(vector<CGVector, std::__1::allocator<CGVector>>*)localStrokeWritingOrientations;
-(id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(CGRect)arg6 strategyIdentifier:(id)arg7 writingDirectionSortedSubstrokes:(id)arg8 averageWritingOrientation:(CGVector)arg9 averageStrokeDeviation:(CGVector)arg10 writingDirectionSortedStrokeIdentifiers:(id)arg11 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector>>*)arg12 coalescedLastSubstrokes:(id)arg13 groupingConfidence:(double)arg14 firstStrokeOrigin:(CGPoint)arg15 ;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 strategyIdentifier:(id)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(CGVector)arg7 averageStrokeDeviation:(CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector>>*)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 firstStrokeOrigin:(CGPoint)arg13 ;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(CGVector)arg7 averageStrokeDeviation:(CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector>>*)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 lastSubstrokeIndexBeforeMerge:(long long)arg13 firstStrokeOrigin:(CGPoint)arg14 ;
-(CGVector)localWritingOrientationAtStrokeIndex:(long long)arg1 ;
-(CGVector)averageStrokeDeviation;
-(long long)lastSubstrokeIndexBeforeMerge;
-(id)coalescedLastSubstrokes;
-(NSArray *)writingDirectionSortedStrokeIdentifiers;
@end

