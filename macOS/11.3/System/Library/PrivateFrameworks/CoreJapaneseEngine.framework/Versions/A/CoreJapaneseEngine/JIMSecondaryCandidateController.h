/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreJapaneseEngine.framework/Versions/A/CoreJapaneseEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreJapaneseEngine/CoreJapaneseEngine-Structs.h>
#import <libobjc.A.dylib/IMKCandidatesDelegate.h>

@class IMKCandidates, NSArray, NSViewController, NSString;

@interface JIMSecondaryCandidateController : NSObject <IMKCandidatesDelegate> {

	IMKCandidates* _candidateController;
	NSArray* _candidates;

}

@property (nonatomic,retain) NSArray * candidates;                               //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,readonly) NSViewController * viewController; 
@property (nonatomic,readonly) IMKCandidates * candidateController;              //@synthesize candidateController=_candidateController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSecondaryCandidateController;
-(id)init;
-(NSViewController *)viewController;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(IMKCandidates *)candidateController;
-(void)candidateSelectionChanged:(id)arg1 candidateController:(id)arg2 ;
-(void)candidateSelected:(id)arg1 candidateController:(id)arg2 ;
-(void)didSelectSortingMode:(id)arg1 candidateController:(id)arg2 ;
-(void)didShowCandidates:(id)arg1 ;
-(void)didUpdateCandidates:(id)arg1 ;
-(void)didHideCandidates:(id)arg1 ;
-(void)didFinishInteracting:(id)arg1 ;
-(unsigned long long)firstVisibleLineForCandidateController:(id)arg1 ;
-(id)selectedCandidateForProposedCandidate:(id)arg1 candidateController:(id)arg2 ;
-(void)setCandidates:(id)arg1 client:(id)arg2 evenWidthCells:(char)arg3 ;
-(void)selectSecondaryCandidateAt:(long long)arg1 ;
@end

