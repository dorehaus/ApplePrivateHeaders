/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/LSExtensionPointRecord.h>

@class NSString;

@interface _LSSynthesizedExtensionPointRecord : LSExtensionPointRecord {

	NSString* _identifier;

}
+(char)supportsSecureCoding;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>*)_resolvingMethods;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(id)version;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(unsigned)platform;
-(id)SDKDictionary;
@end

