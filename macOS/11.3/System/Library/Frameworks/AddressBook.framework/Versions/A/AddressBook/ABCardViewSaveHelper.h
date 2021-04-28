/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABCardViewSaveHelperDelegate;
@class CNContactStore, AKCardViewDataSource, CNContainer, ABCommandExecutor;

@interface ABCardViewSaveHelper : NSObject {

	char _isContactNewlyCreated;
	char _isSaving;
	char _hasSaved;
	char _ignoresGuardianRestrictions;
	CNContactStore* _contactStore;
	AKCardViewDataSource* _dataSource;
	CNContainer* _parentContainer;
	ABCommandExecutor* _commandExecutor;
	id<ABCardViewSaveHelperDelegate> _delegate;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) char isSaving;                                                 //@synthesize isSaving=_isSaving - In the implementation block
@property (assign,nonatomic) char hasSaved;                                                 //@synthesize hasSaved=_hasSaved - In the implementation block
@property (nonatomic,retain) AKCardViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ABCommandExecutor * commandExecutor;                           //@synthesize commandExecutor=_commandExecutor - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                 //@synthesize parentContainer=_parentContainer - In the implementation block
@property (assign,nonatomic) char isContactNewlyCreated;                                    //@synthesize isContactNewlyCreated=_isContactNewlyCreated - In the implementation block
@property (assign,nonatomic) char ignoresGuardianRestrictions;                              //@synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions - In the implementation block
@property (assign,nonatomic,__weak) id<ABCardViewSaveHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ABCardViewSaveHelperDelegate>)delegate;
-(void)setDelegate:(id<ABCardViewSaveHelperDelegate>)arg1 ;
-(void)save;
-(AKCardViewDataSource *)dataSource;
-(void)setDataSource:(AKCardViewDataSource *)arg1 ;
-(char)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(char)isSaving;
-(CNContainer *)parentContainer;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(ABCommandExecutor *)commandExecutor;
-(void)setCommandExecutor:(ABCommandExecutor *)arg1 ;
-(void)setIsContactNewlyCreated:(char)arg1 ;
-(char)canSave;
-(void)setHasSaved:(char)arg1 ;
-(char)hasSaved;
-(void)setIsSaving:(char)arg1 ;
-(void)saveEmptyDataSource;
-(void)saveDataSourceWithChanges;
-(char)isContactNewlyCreated;
-(void)deleteUnsavedContact;
-(void)deletePeople;
-(id)makeUpdateCommandForUpdatedContacts:(id)arg1 ;
-(id)makeDeleteCommandForDeletedContacts:(id)arg1 ;
-(void)executeCommand:(id)arg1 ;
-(void)addPerson;
-(char)shouldAddNewPersonToStoreDataSourceChanges;
-(void)addNewPersonToStoreDataSourceChanges;
-(void)updatePeople;
-(id)makeAddCommandForContacts:(id)arg1 toContainer:(id)arg2 ;
-(char)dataSourceHasNonLinkChanges;
-(char)hasPhotoChanges;
-(id)makeNewPersonToStoreDataSourceChanges;
-(char)hasNameChanges;
-(void)preferForNameContact:(id)arg1 inContacts:(id)arg2 ;
-(void)preferForPhotoContact:(id)arg1 inContacts:(id)arg2 ;
-(id)makeSetImageCommandForContact:(id)arg1 ;
-(id)makeLinkCommandForContacts:(id)arg1 linkIdentifier:(id)arg2 ;
-(id)propertiesToSetOnNewPerson;
-(void)applyProperties:(id)arg1 fromContact:(id)arg2 toContact:(id)arg3 ;
-(id)contactByApplyingChangesFromContact:(id)arg1 toContact:(id)arg2 ;
@end
