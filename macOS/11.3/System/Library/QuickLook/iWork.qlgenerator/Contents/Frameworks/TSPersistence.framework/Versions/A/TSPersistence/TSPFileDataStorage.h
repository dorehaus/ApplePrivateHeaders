/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPStreamDataStorage.h>

@interface TSPFileDataStorage : TSPStreamDataStorage

@property (nonatomic,readonly) id<TSPCryptoInfo> decryptionInfo; 
-(unsigned long long)encodedLength;
-(char)isReadable;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id<TSPCryptoInfo>)decryptionInfo;
-(id)AVAssetWithOptions:(id)arg1 forData:(id)arg2 ;
-(void)performReadOnBookmarkDataSourceURLWithAccessor:(/*^block*/id)arg1 ;
@end
