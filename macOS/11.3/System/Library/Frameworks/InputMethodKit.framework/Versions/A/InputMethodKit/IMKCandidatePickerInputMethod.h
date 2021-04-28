/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/IMKAbstractInputMethod.h>
#import <libobjc.A.dylib/IMKCandidateMenuDelegate.h>

@class IMKCandidateList, NSNumber, NSString;

@interface IMKCandidatePickerInputMethod : IMKAbstractInputMethod <IMKCandidateMenuDelegate> {

	IMKCandidateList* _candidateList;
	NSNumber* _attachedTextDocumentWasShowingWithMarking;

}

@property (nonatomic,readonly) IMKCandidateList * candidateList;                                //@synthesize candidateList=_candidateList - In the implementation block
@property (nonatomic,retain) NSNumber * attachedTextDocumentWasShowingWithMarking;              //@synthesize attachedTextDocumentWasShowingWithMarking=_attachedTextDocumentWasShowingWithMarking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inputMethodWithAttachedKeyboard:(id)arg1 candidates:(id)arg2 ;
-(void)candidateMenu:(id)arg1 didChangeFocusTo:(id)arg2 ;
-(void)candidateMenu:(id)arg1 didSelectCandidate:(id)arg2 ;
-(void)candidateMenuDidFinishInteracting:(id)arg1 ;
-(void)willAttachTextDocument:(id)arg1 ;
-(void)didAttachTextDocument:(id)arg1 ;
-(id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2 candidates:(id)arg3 ;
-(NSNumber *)attachedTextDocumentWasShowingWithMarking;
-(void)setAttachedTextDocumentWasShowingWithMarking:(NSNumber *)arg1 ;
-(void)reflectCandidatesInTouchBar;
-(IMKCandidateList *)candidateList;
-(id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2 ;
-(char)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2 ;
@end

