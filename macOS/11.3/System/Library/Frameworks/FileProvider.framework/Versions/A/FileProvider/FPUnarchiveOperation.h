/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>
#import <libobjc.A.dylib/FPArchiveServiceUnarchivingDelegate.h>

@class FPItem, NSURL, FPItemID, NSFileCoordinator, NSString;

@interface FPUnarchiveOperation : FPActionOperation <FPArchiveServiceUnarchivingDelegate> {

	FPItem* _item;
	NSURL* _itemURL;
	FPItemID* _placeholderID;
	FPItem* _destinationFolder;
	char _hasStitchedUnarchivedItems;
	NSFileCoordinator* _coordinator;
	id _coordinationAccessToken;
	/*^block*/id _passphraseRequestBlock;
	/*^block*/id _unarchiveCompletionBlock;

}

@property (nonatomic,copy) id passphraseRequestBlock;                //@synthesize passphraseRequestBlock=_passphraseRequestBlock - In the implementation block
@property (nonatomic,copy) id unarchiveCompletionBlock;              //@synthesize unarchiveCompletionBlock=_unarchiveCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)actionMain;
-(id)_newParentProgressWithCompletedUnitCount:(long long)arg1 ;
-(void)_completeWithItemURL:(id)arg1 item:(id)arg2 service:(id)arg3 resultURL:(id)arg4 error:(id)arg5 ;
-(id)passphraseRequestBlock;
-(char)_handleArchiveDecryptionError:(id)arg1 item:(id)arg2 service:(id)arg3 itemURL:(id)arg4 ;
-(void)__completeWithItem:(id)arg1 service:(id)arg2 resultURL:(id)arg3 error:(id)arg4 ;
-(char)getHasUnarchivedMultipleItems:(char*)arg1 firstUnarchivedItemURL:(id*)arg2 forArchiveFolderURL:(id)arg3 error:(id*)arg4 ;
-(id)unarchiveCompletionBlock;
-(void)setUnarchiveCompletionBlock:(id)arg1 ;
-(void)service:(id)arg1 didReceiveArchivedItemsDescriptors:(id)arg2 ;
-(id)initWithItem:(id)arg1 destinationFolder:(id)arg2 ;
-(void)setPassphraseRequestBlock:(id)arg1 ;
@end

