/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMObject.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/EMMutableContentItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, EMMailDropMetadata, EMObjectID;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding> {

	char _isAvailableLocally;
	char _isSinglePagePDF;
	int _exchangeEventUID;
	NSArray* _availableRepresentations;
	NSString* _contentID;
	long long _dataTransferByteCount;
	NSString* _displayName;
	/*^block*/id _loaderBlock;
	long long _storageByteCount;
	NSString* _UTType;
	EMMailDropMetadata* _mailDropMetadata;

}

@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * availableRepresentations;                    //@synthesize availableRepresentations=_availableRepresentations - In the implementation block
@property (assign,nonatomic) char isAvailableLocally;                             //@synthesize isAvailableLocally=_isAvailableLocally - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * contentID;                                  //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy) NSString * UTType;                                     //@synthesize UTType=_UTType - In the implementation block
@property (assign,nonatomic) char isSinglePagePDF;                                //@synthesize isSinglePagePDF=_isSinglePagePDF - In the implementation block
@property (assign,nonatomic) long long dataTransferByteCount;                     //@synthesize dataTransferByteCount=_dataTransferByteCount - In the implementation block
@property (assign,nonatomic) long long storageByteCount;                          //@synthesize storageByteCount=_storageByteCount - In the implementation block
@property (nonatomic,copy) EMMailDropMetadata * mailDropMetadata;                 //@synthesize mailDropMetadata=_mailDropMetadata - In the implementation block
@property (assign,nonatomic) int exchangeEventUID;                                //@synthesize exchangeEventUID=_exchangeEventUID - In the implementation block
@property (nonatomic,copy) id loaderBlock;                                        //@synthesize loaderBlock=_loaderBlock - In the implementation block
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setLoaderBlock:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)requestRepresentationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)ef_publicDescription;
-(id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)availableRepresentations;
-(NSString *)contentID;
-(NSString *)UTType;
-(EMMailDropMetadata *)mailDropMetadata;
-(char)isAvailableLocally;
-(char)isSinglePagePDF;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(int)exchangeEventUID;
-(id)loaderBlock;
-(char)_isSinglePagePDFWithContentURL:(id)arg1 ;
-(void)setIsSinglePagePDF:(char)arg1 ;
-(void)setIsAvailableLocally:(char)arg1 ;
-(void)setAvailableRepresentations:(NSArray *)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
-(void)setUTType:(NSString *)arg1 ;
-(void)setDataTransferByteCount:(long long)arg1 ;
-(void)setStorageByteCount:(long long)arg1 ;
-(void)setMailDropMetadata:(EMMailDropMetadata *)arg1 ;
-(void)setExchangeEventUID:(int)arg1 ;
@end
