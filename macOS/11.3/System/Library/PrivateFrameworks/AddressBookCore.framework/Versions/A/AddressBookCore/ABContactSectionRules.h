/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookCore/AddressBookCore-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray, NSString;

@interface ABContactSectionRules : NSObject {

	NSMutableDictionary* _plist;
	NSMutableArray* _cachedHeaders;
	NSDictionary* _cachedLocalizedHeaders;
	NSArray* _cachedSortedHeaders;
	UCollatorRef _collator;

}

@property (readonly) NSArray * sectionHeaders; 
@property (readonly) NSArray * sectionIndices; 
@property (readonly) NSString * collationKey; 
@property (nonatomic,retain) NSMutableDictionary * plist;              //@synthesize plist=_plist - In the implementation block
+(id)rulesForCurrentLocalization;
-(void)dealloc;
-(id)init;
-(NSMutableDictionary *)plist;
-(id)nameTransform;
-(void)setPlist:(NSMutableDictionary *)arg1 ;
-(NSArray *)sectionHeaders;
-(NSString *)collationKey;
-(id)sectionForName:(id)arg1 ;
-(NSArray *)sectionIndices;
-(id)localizedSectionHeaders;
-(id)sortedHeaders;
@end

