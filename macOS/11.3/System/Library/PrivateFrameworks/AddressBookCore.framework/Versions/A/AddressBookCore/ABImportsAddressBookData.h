/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABAddressBook, ABAccount, ABDictionaryImporter, NSOperationQueue, NSMutableArray, NSString, ABSimilarRecordMerger;

@interface ABImportsAddressBookData : NSObject {

	ABAddressBook* _addressBook;
	ABAccount* _sourceAccount;
	ABAccount* _destinationAccount;
	ABDictionaryImporter* _importer;
	NSOperationQueue* _imageMover;
	NSMutableArray* _newRecords;
	NSString* _meCardIdentifier;
	ABSimilarRecordMerger* _merger;
	char _deleteOriginalRecords;

}
+(id)importerWithAddressBook:(id)arg1 sourceAccount:(id)arg2 destinationAccount:(id)arg3 options:(int)arg4 ;
+(void)importRecordsFromAccount:(id)arg1 intoAccount:(id)arg2 addressBook:(id)arg3 options:(int)arg4 ;
-(void)dealloc;
-(void)importData;
-(id)initWithAddressBook:(id)arg1 sourceAccount:(id)arg2 destinationAccount:(id)arg3 options:(int)arg4 ;
-(id)newMergerWithExistingRecords;
-(id)moveRecordsIntoDestinationStore;
-(void)setTheMeCard;
-(void)mergeNewRecordsWithPreexistingData;
-(void)assignNewRecordsToGroups;
-(void)waitForImagesToTransfer;
-(void)removeOriginalRecords:(id)arg1 ;
-(id)recordsToImport;
-(void)importRecord:(id)arg1 ;
-(id)peopleToImport;
-(id)groupsToImport;
@end
