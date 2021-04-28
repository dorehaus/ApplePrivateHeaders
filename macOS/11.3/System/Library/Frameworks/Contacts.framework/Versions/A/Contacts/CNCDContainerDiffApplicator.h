/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCDSaveContext;

@interface CNCDContainerDiffApplicator : NSObject {

	CNCDSaveContext* _saveContext;

}

@property (nonatomic,readonly) CNCDSaveContext * saveContext;              //@synthesize saveContext=_saveContext - In the implementation block
-(void)applyDiff:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(CNCDSaveContext *)saveContext;
-(id)initWithSaveContext:(id)arg1 ;
-(void)setGuardianRestricted:(char)arg1 onContainerWithIdentifier:(id)arg2 ;
@end

