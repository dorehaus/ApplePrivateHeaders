/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPTestingOperation.h>
#import <libobjc.A.dylib/NSFileProviderTestingLookup.h>

@class NSString;

@interface FPTestingLookup : FPTestingOperation <NSFileProviderTestingLookup> {

	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) unsigned long long side; 
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(long long)type;
-(id)asLookup;
-(unsigned long long)side;
-(id)initWithOperationIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;
@end

