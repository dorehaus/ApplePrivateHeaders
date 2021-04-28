/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMKCandidateMenu.h>

@protocol IMKCandidateMenuDelegate, IMKTextInput;
@class IMKCandidate, IMKCandidateList, IMKCandidates, NSString;

@interface IMKCandidateControllerBasedCandidateMenu : NSObject <IMKCandidateMenu> {

	id<IMKCandidateMenuDelegate> _delegate;
	IMKCandidates* _candidateController;
	IMKCandidateList* _candidateList;
	unsigned long long _candidateStyle;
	id<IMKTextInput> _textInput;

}

@property (nonatomic,retain) IMKCandidateList * candidateList;                          //@synthesize candidateList=_candidateList - In the implementation block
@property (nonatomic,readonly) IMKCandidates * candidateController;                     //@synthesize candidateController=_candidateController - In the implementation block
@property (nonatomic,retain) id<IMKTextInput> textInput;                                //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic,__weak) id<IMKCandidateMenuDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isShown; 
@property (nonatomic,retain) IMKCandidate * focusedCandidate; 
@property (nonatomic,readonly) IMKCandidateList * visibleCandidates; 
@property (assign,nonatomic) unsigned long long candidateStyle;                         //@synthesize candidateStyle=_candidateStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCandidateStyle:(unsigned long long)arg1 ;
-(void)showCandidates:(id)arg1 ;
-(char)selectCandidateNumbered:(unsigned long long)arg1 ;
-(void)moveFocusLeft;
-(void)moveFocusRight;
-(void)moveFocusUp;
-(void)moveFocusDown;
-(void)selectFocusedCandidate;
-(unsigned long long)touchBarPanelTypeForCandidateStyle:(unsigned long long)arg1 ;
-(unsigned long long)onScreenPanelTypeForCandidateStyle:(unsigned long long)arg1 ;
-(unsigned long long)panelTypeForCandidateStyle:(unsigned long long)arg1 isTouchBar:(char)arg2 ;
-(unsigned long long)candidateStyle;
-(id)initWithCandidateController:(id)arg1 ;
-(void)dealloc;
-(id<IMKCandidateMenuDelegate>)delegate;
-(void)setDelegate:(id<IMKCandidateMenuDelegate>)arg1 ;
-(void)hide;
-(char)isShown;
-(id<IMKTextInput>)textInput;
-(IMKCandidateList *)candidateList;
-(IMKCandidates *)candidateController;
-(void)setTextInput:(id<IMKTextInput>)arg1 ;
-(void)setCandidateList:(IMKCandidateList *)arg1 ;
-(void)candidateSelectionChanged:(id)arg1 candidateController:(id)arg2 ;
-(void)candidateSelected:(id)arg1 candidateController:(id)arg2 ;
-(void)didSelectSortingMode:(id)arg1 candidateController:(id)arg2 ;
-(void)didShowCandidates:(id)arg1 ;
-(void)didUpdateCandidates:(id)arg1 ;
-(void)didHideCandidates:(id)arg1 ;
-(void)didFinishInteracting:(id)arg1 ;
-(unsigned long long)firstVisibleLineForCandidateController:(id)arg1 ;
-(id)selectedCandidateForProposedCandidate:(id)arg1 candidateController:(id)arg2 ;
-(void)setFocusedCandidate:(IMKCandidate *)arg1 ;
-(IMKCandidateList *)visibleCandidates;
-(id)initWithCandidateController:(id)arg1 textInput:(id)arg2 ;
-(IMKCandidate *)focusedCandidate;
@end

