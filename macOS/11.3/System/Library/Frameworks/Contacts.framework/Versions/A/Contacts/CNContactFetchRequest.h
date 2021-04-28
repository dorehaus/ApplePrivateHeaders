/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNFetchRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding> {

	char _rankSort;
	char _mutableObjects;
	char _unifyResults;
	char _disallowsEncodedFetch;
	char _onlyMainStore;
	char _allowsBatching;
	char _shouldFailIfAccountNotYetSynced;
	NSPredicate* _predicate;
	NSArray* _keysToFetch;
	long long _sortOrder;
	unsigned long long _batchSize;
	unsigned long long _serialNumber;

}

@property (assign) char disallowsEncodedFetch;                                  //@synthesize disallowsEncodedFetch=_disallowsEncodedFetch - In the implementation block
@property (assign) unsigned long long batchSize;                                //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) unsigned long long serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign) char rankSort;                                               //@synthesize rankSort=_rankSort - In the implementation block
@property (assign) char onlyMainStore;                                          //@synthesize onlyMainStore=_onlyMainStore - In the implementation block
@property (assign) char allowsBatching;                                         //@synthesize allowsBatching=_allowsBatching - In the implementation block
@property (assign,nonatomic) char shouldFailIfAccountNotYetSynced;              //@synthesize shouldFailIfAccountNotYetSynced=_shouldFailIfAccountNotYetSynced - In the implementation block
@property (copy) NSPredicate * predicate;                                       //@synthesize predicate=_predicate - In the implementation block
@property (copy) NSArray * keysToFetch;                                         //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign) char mutableObjects;                                         //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign) char unifyResults;                                           //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign) long long sortOrder;                                         //@synthesize sortOrder=_sortOrder - In the implementation block
+(char)supportsSecureCoding;
+(unsigned long long)makeSerialNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(unsigned long long)serialNumber;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(void)setSortOrder:(long long)arg1 ;
-(long long)sortOrder;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(char)unifyResults;
-(void)setUnifyResults:(char)arg1 ;
-(char)mutableObjects;
-(void)setMutableObjects:(char)arg1 ;
-(id)initWithKeysToFetch:(id)arg1 ;
-(char)onlyMainStore;
-(char)shouldFailIfAccountNotYetSynced;
-(void)acceptVisitor:(id)arg1 ;
-(void)setDisallowsEncodedFetch:(char)arg1 ;
-(id)effectiveKeysToFetch;
-(void)setOnlyMainStore:(char)arg1 ;
-(id)effectivePredicate;
-(BOOL)requiresMeContactAuthorization;
-(char)rankSort;
-(void)setRankSort:(char)arg1 ;
-(char)disallowsEncodedFetch;
-(char)allowsBatching;
-(void)setAllowsBatching:(char)arg1 ;
-(void)setShouldFailIfAccountNotYetSynced:(char)arg1 ;
@end

