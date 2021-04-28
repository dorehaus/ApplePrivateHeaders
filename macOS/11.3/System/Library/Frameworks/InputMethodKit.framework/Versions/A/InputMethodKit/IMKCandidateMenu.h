/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IMKCandidate, IMKCandidateList;


@protocol IMKCandidateMenu <NSObject>
@property (assign,nonatomic,__weak) id<IMKCandidateMenuDelegate> delegate; 
@property (nonatomic,readonly) char isShown; 
@property (nonatomic,retain) IMKCandidate * focusedCandidate; 
@property (nonatomic,readonly) IMKCandidateList * visibleCandidates; 
@property (assign,nonatomic) unsigned long long candidateStyle; 
@required
-(void)setCandidateStyle:(unsigned long long)arg1;
-(void)showCandidates:(id)arg1;
-(char)selectCandidateNumbered:(unsigned long long)arg1;
-(void)moveFocusLeft;
-(void)moveFocusRight;
-(void)moveFocusUp;
-(void)moveFocusDown;
-(void)selectFocusedCandidate;
-(unsigned long long)candidateStyle;
-(id<IMKCandidateMenuDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)hide;
-(char)isShown;
-(void)setFocusedCandidate:(id)arg1;
-(IMKCandidateList *)visibleCandidates;
-(IMKCandidate *)focusedCandidate;

@end

