/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libswiftCore.dylib/Swift.__SwiftNativeNSString.h>
#import <libobjc.A.dylib/Swift._NSCopying.h>

@interface Swift.__SharedStringStorage : Swift.__SwiftNativeNSString <Swift._NSCopying> {

	 _owner;
	 start;
	 _countAndFlags;
	 _breadcrumbs;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) unsigned long long hash; 
@property (readonly,nonatomic) unsigned long long fastestEncoding; 
-(id)copyWithZone:(void*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const char*)_fastCStringContents:(char)arg1 ;
-(long long)length;
-(const char*)UTF8String;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(SCD_Struct_Sw1)arg2 ;
-(char)isEqualToString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(char)getCString:(char*)arg1 maxLength:(long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)init;
@end

