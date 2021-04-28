/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMKCandidateController, IMKDefinitionToLayoutConstraint, IMKCandidateData, IMKCandidateUIProperties, IMKLayout;

@interface IMKDefinitionToLayoutController : NSObject {

	char _verticallyAligned;
	Class _layoutUnitClass;
	IMKCandidateController* _candidateController;
	IMKDefinitionToLayoutConstraint* _constraints;
	IMKCandidateData* _candidateData;
	IMKCandidateUIProperties* _UIProperties;

}

@property (assign,nonatomic) IMKCandidateController * candidateController;                   //@synthesize candidateController=_candidateController - In the implementation block
@property (assign,getter=isVerticallyAligned,nonatomic) char verticallyAligned;              //@synthesize verticallyAligned=_verticallyAligned - In the implementation block
@property (assign,nonatomic) Class layoutUnitClass;                                          //@synthesize layoutUnitClass=_layoutUnitClass - In the implementation block
@property (nonatomic,retain) IMKDefinitionToLayoutConstraint * constraints;                  //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) IMKCandidateData * candidateData;                               //@synthesize candidateData=_candidateData - In the implementation block
@property (nonatomic,retain) IMKCandidateUIProperties * UIProperties;                        //@synthesize UIProperties=_UIProperties - In the implementation block
@property (nonatomic,readonly) IMKLayout * layout; 
-(IMKCandidateUIProperties *)UIProperties;
-(void)setVerticallyAligned:(char)arg1 ;
-(void)setCandidateData:(IMKCandidateData *)arg1 ;
-(void)setUIProperties:(IMKCandidateUIProperties *)arg1 ;
-(IMKCandidateData *)candidateData;
-(Class)layoutUnitClass;
-(void)removeLastLineIfEmpty:(id)arg1 ;
-(id)layoutForSingleRowTypeWithSimilarWidth;
-(id)layoutForSingleRowType;
-(id)layoutForSingleRowPressAndHoldType;
-(char)isVerticallyAligned;
-(id)layoutForVerticallyAligned;
-(id)layoutForHorizontallyAligned;
-(void)setLayoutUnitClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(IMKLayout *)layout;
-(IMKDefinitionToLayoutConstraint *)constraints;
-(void)setConstraints:(IMKDefinitionToLayoutConstraint *)arg1 ;
-(IMKCandidateController *)candidateController;
-(void)setCandidateController:(IMKCandidateController *)arg1 ;
@end

