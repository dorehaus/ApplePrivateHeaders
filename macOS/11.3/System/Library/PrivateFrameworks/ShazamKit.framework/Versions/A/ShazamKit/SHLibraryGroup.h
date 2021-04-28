/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/SHLibraryItem.h>

@class SHLibraryItemMetadata, NSString;

@interface SHLibraryGroup : NSObject <SHLibraryItem> {

	SHLibraryItemMetadata* _metadata;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (readonly) SHLibraryItemMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(SHLibraryItemMetadata *)metadata;
-(id)_initWithIdentifier:(id)arg1 metadata:(id)arg2 ;
-(char)validIdentifier:(id)arg1 ;
-(char)isEqualGroup:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 metadata:(id)arg2 ;
@end

