/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMKUICandidateLayoutDelegate;
#import <InputMethodKit/InputMethodKit-Structs.h>
@class IMKCandidateListDictionary, NSString;

@interface IMKUIAbstractCandidateLayout : NSObject {

	IMKCandidateListDictionary* _candidateGroups;
	id<IMKUICandidateLayoutDelegate> _delegate;
	NSString* _identifier;

}

@property (nonatomic,retain) IMKCandidateListDictionary * candidateGroups;                  //@synthesize candidateGroups=_candidateGroups - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<IMKUICandidateLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
-(id<IMKUICandidateLayoutDelegate>)delegate;
-(void)setDelegate:(id<IMKUICandidateLayoutDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGSize)contentSize;
-(void)prepareLayout;
-(id)itemForIndexPath:(id)arg1 ;
-(void)setCandidateGroups:(IMKCandidateListDictionary *)arg1 ;
-(IMKCandidateListDictionary *)candidateGroups;
@end
