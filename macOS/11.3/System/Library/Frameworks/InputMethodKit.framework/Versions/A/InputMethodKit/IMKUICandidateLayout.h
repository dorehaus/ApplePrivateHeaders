/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMKCandidate, IMKUITriCandidateLayout, NSArray;

@interface IMKUICandidateLayout : NSObject {

	IMKCandidate* _left;
	IMKCandidate* _middle;
	IMKUITriCandidateLayout* _right;
	char _middleIsCorrection;
	NSArray* _candidates;

}

@property (readonly) IMKCandidate * leftCandidate;                    //@synthesize left=_left - In the implementation block
@property (readonly) IMKCandidate * middleCandidate;                  //@synthesize middle=_middle - In the implementation block
@property (readonly) IMKUITriCandidateLayout * rightSet;              //@synthesize right=_right - In the implementation block
@property (readonly) char middleIsCorrection;                         //@synthesize middleIsCorrection=_middleIsCorrection - In the implementation block
@property (readonly) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
+(id)candidateSetFrom:(id)arg1 ;
-(char)middleIsCorrection;
-(IMKUITriCandidateLayout *)rightSet;
-(id)initWithLeftCandidate:(id)arg1 middleCandidate:(id)arg2 rightSet:(id)arg3 ;
-(id)initWithLeftCandidate:(id)arg1 middleCandidate:(id)arg2 thatIsCorrection:(char)arg3 rightSet:(id)arg4 ;
-(id)initWithLeftCandidate:(id)arg1 middleCandidate:(id)arg2 rightCandidate:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(IMKCandidate *)leftCandidate;
-(IMKCandidate *)middleCandidate;
-(NSArray *)candidates;
-(id)candidateAtIndex:(unsigned long long)arg1 ;
@end

