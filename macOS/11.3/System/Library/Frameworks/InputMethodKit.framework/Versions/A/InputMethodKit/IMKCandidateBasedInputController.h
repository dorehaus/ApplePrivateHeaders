/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKInputController.h>
#import <libobjc.A.dylib/IMKCandidateControllerDelegate.h>
#import <libobjc.A.dylib/IMKCandidateSelectionViewDelegate.h>
#import <libobjc.A.dylib/IMKCandidatesDelegate.h>

@class IMKCandidates, NSArray, NSString;

@interface IMKCandidateBasedInputController : IMKInputController <IMKCandidateControllerDelegate, IMKCandidateSelectionViewDelegate, IMKCandidatesDelegate> {

	char _automaticallyShowPrimaryCandidatesInSecondaryController;
	IMKCandidates* _candidateController;
	IMKCandidates* _candidateControllerForScrubber;
	IMKCandidates* _candidateControllerForTouchBar;
	char _primaryCandidatesShownByScrubbing;
	NSArray* _secondaryCandidates;
	unsigned long long _touchBarCandidatesSelectionTimeStamp;
	NSRange _selectedRange;
	unsigned long long _windowLevel;
	char _sInvalidateIMKTextOrientation;
	char _sInvalidateIsIncrementalSearchInputContext;
	char _sInvalidateIncrementalSearchClientGeometry;
	char _touchBarCandidatesDidPresent;

}

@property (assign,nonatomic) char primaryCandidatesShownByScrubbing;                                    //@synthesize primaryCandidatesShownByScrubbing=_primaryCandidatesShownByScrubbing - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) unsigned long long windowLevel;                                            //@synthesize windowLevel=_windowLevel - In the implementation block
@property (assign,nonatomic) char sInvalidateIMKTextOrientation;                                        //@synthesize sInvalidateIMKTextOrientation=_sInvalidateIMKTextOrientation - In the implementation block
@property (assign,nonatomic) char sInvalidateIsIncrementalSearchInputContext;                           //@synthesize sInvalidateIsIncrementalSearchInputContext=_sInvalidateIsIncrementalSearchInputContext - In the implementation block
@property (assign,nonatomic) char sInvalidateIncrementalSearchClientGeometry;                           //@synthesize sInvalidateIncrementalSearchClientGeometry=_sInvalidateIncrementalSearchClientGeometry - In the implementation block
@property (assign,nonatomic) char touchBarCandidatesDidPresent;                                         //@synthesize touchBarCandidatesDidPresent=_touchBarCandidatesDidPresent - In the implementation block
@property (assign,nonatomic) unsigned long long touchBarCandidatesSelectionTimeStamp;                   //@synthesize touchBarCandidatesSelectionTimeStamp=_touchBarCandidatesSelectionTimeStamp - In the implementation block
@property (nonatomic,retain) IMKCandidates * candidateController;                                       //@synthesize candidateController=_candidateController - In the implementation block
@property (nonatomic,retain) IMKCandidates * candidateControllerForScrubber;                            //@synthesize candidateControllerForScrubber=_candidateControllerForScrubber - In the implementation block
@property (nonatomic,retain) IMKCandidates * candidateControllerForTouchBar;                            //@synthesize candidateControllerForTouchBar=_candidateControllerForTouchBar - In the implementation block
@property (nonatomic,readonly) char isVerticalLayout; 
@property (nonatomic,readonly) char isIncrementalSearchInputContext; 
@property (nonatomic,readonly) unsigned long long incrementalSearchClientGeometry; 
@property (assign,nonatomic) char automaticallyShowPrimaryCandidatesInSecondaryController;              //@synthesize automaticallyShowPrimaryCandidatesInSecondaryController=_automaticallyShowPrimaryCandidatesInSecondaryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)automaticallyShowPrimaryCandidatesInSecondaryController;
-(void)showCandidates:(id)arg1 ;
-(void)setTouchBarCandidatesDidPresent:(char)arg1 ;
-(void)hideScrubberAndCancelFurtherRequests;
-(void)showCandidateListDictionary:(id)arg1 sortingModes:(id)arg2 selectedSortingMode:(id)arg3 ;
-(void)setSInvalidateIMKTextOrientation:(char)arg1 ;
-(void)setSInvalidateIsIncrementalSearchInputContext:(char)arg1 ;
-(void)setSInvalidateIncrementalSearchClientGeometry:(char)arg1 ;
-(char)sInvalidateIMKTextOrientation;
-(char)sInvalidateIsIncrementalSearchInputContext;
-(char)sInvalidateIncrementalSearchClientGeometry;
-(char)touchBarCandidatesDidPresent;
-(void)setCandidateControllerForTouchBar:(IMKCandidates *)arg1 ;
-(char)shouldHandleTouchBarPresentationManually;
-(void)reflectOnScreenCandidatesInTouchBar;
-(IMKCandidates *)candidateControllerForScrubber;
-(unsigned long long)touchBarCandidatesSelectionTimeStamp;
-(void)showScrubberPanel;
-(void)setTouchBarCandidatesSelectionTimeStamp:(unsigned long long)arg1 ;
-(id)makeScrubbingCandidateController;
-(void)setCandidateControllerForScrubber:(IMKCandidates *)arg1 ;
-(void)invalidateClientSideInfoCache;
-(void)reloadSecondaryCandidatesOnly;
-(void)hideSecondaryCandidatesOnly;
-(void)setAutomaticallyShowPrimaryCandidatesInSecondaryController:(char)arg1 ;
-(char)primaryCandidatesShownByScrubbing;
-(void)setPrimaryCandidatesShownByScrubbing:(char)arg1 ;
-(void)dealloc;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(NSRange)selectedRange;
-(unsigned long long)windowLevel;
-(unsigned long long)incrementalSearchClientGeometry;
-(void)setWindowLevel:(unsigned long long)arg1 ;
-(IMKCandidates *)candidateController;
-(id)inlineText;
-(id)sortingMethods;
-(long long)windowType;
-(void)candidateSelectionChanged:(id)arg1 candidateController:(id)arg2 ;
-(void)candidateSelected:(id)arg1 candidateController:(id)arg2 ;
-(void)didSelectSortingMode:(id)arg1 candidateController:(id)arg2 ;
-(void)didShowCandidates:(id)arg1 ;
-(void)didUpdateCandidates:(id)arg1 ;
-(void)didHideCandidates:(id)arg1 ;
-(void)didFinishInteracting:(id)arg1 ;
-(unsigned long long)firstVisibleLineForCandidateController:(id)arg1 ;
-(id)selectedCandidateForProposedCandidate:(id)arg1 candidateController:(id)arg2 ;
-(char)isIncrementalSearchInputContext;
-(void)setMarkedText:(id)arg1 selectionRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)setCandidateController:(IMKCandidates *)arg1 ;
-(id)functionRowItemTextInputViewController;
-(IMKCandidates *)candidateControllerForTouchBar;
-(void)setSecondaryCandidates:(id)arg1 ;
-(void)activateServer:(id)arg1 ;
-(void)deactivateServer:(id)arg1 ;
-(void)hideCandidates;
-(void)showCandidateListDictionary:(id)arg1 sortingModes:(id)arg2 ;
-(void)updateCandidateController:(id)arg1 ;
-(void)updateWindowLevel;
-(id)makeCandidateController;
-(id)makeTouchBarCandidateController;
-(char)isVerticalLayout;
-(void)reloadCandidates;
-(id)candidatesForSortingMethod:(id)arg1 ;
-(id)displayMethod;
-(id)textClient;
-(char)shouldUpdateExistingCandidates;
-(id)informationView;
-(id)defaultDisplayMethod;
-(id)currentInlineText;
-(void)didSelectSortingMode:(id)arg1 ;
-(id)displayMethods;
-(id)selectedDisplayMethod;
-(char)isUsingIncrementalSearch;
-(char)selectDisplayMethod:(id)arg1 ;
@end

