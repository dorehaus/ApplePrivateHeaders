/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _sortDescriptors;
	NSFileProviderSearchQuery* _searchQuery;

}

@property (copy) NSArray * sortDescriptors;                            //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (copy) NSFileProviderSearchQuery * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
@end
