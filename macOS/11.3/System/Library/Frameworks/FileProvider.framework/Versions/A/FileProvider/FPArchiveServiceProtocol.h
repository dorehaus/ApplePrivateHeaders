/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPArchiveServiceProtocol
@required
-(id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)itemDescriptorsForItemAtURL:(id)arg1 passphrases:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 acceptedFormats:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)itemDescriptorsForItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

