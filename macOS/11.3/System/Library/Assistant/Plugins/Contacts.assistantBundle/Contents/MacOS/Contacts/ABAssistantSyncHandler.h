/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABAssistantSyncHandler.h>
@class ABAddressBook;


@protocol ABAssistantSyncHandler <AFSyncHandler,NSObject>
@property (nonatomic,retain) ABAddressBook * addressBook; 
@required
-(ABAddressBook *)addressBook;
-(void)setAddressBook:(id)arg1;

@end


@class ABAddressBook, ABAssistantSyncWorker, NSString;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler> {

	ABAddressBook* _addressBook;
	ABAssistantSyncWorker* _syncWorker;

}

@property (nonatomic,retain) ABAssistantSyncWorker * syncWorker;              //@synthesize syncWorker=_syncWorker - In the implementation block
@property (nonatomic,retain) ABAddressBook * addressBook; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ABAssistantSyncWorker *)syncWorker;
-(void)setSyncWorker:(ABAssistantSyncWorker *)arg1 ;
-(void)dealloc;
-(ABAddressBook *)addressBook;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)syncDidEnd;
-(id)currentSyncSnapshot;
@end

