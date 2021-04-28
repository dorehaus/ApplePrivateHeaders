/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFTaggedPointer : NSObject {

	SCD_Union_PF12 _payload;

}
+(unsigned short)tag;
+(char)taggedPointersEnabled;
+(id)newInstanceWithPayload:(unsigned long long)arg1 ;
+(id)newInstanceWithSignedPayload:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPayload:(unsigned long long)arg1 ;
-(unsigned long long)payload;
-(id)initWithSignedPayload:(long long)arg1 ;
-(long long)signedPayload;
-(char)isTaggedPointer;
@end

