/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSXPCDecoding <NSObject>
@required
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
-(long long)decodeInt64ForKey:(id)arg1;
-(char)containsValueForKey:(id)arg1;
-(double)decodeDoubleForKey:(id)arg1;
-(char)decodeBoolForKey:(id)arg1;
-(id)decodeXPCObjectOfType:(const xpc_type_sRef)arg1 forKey:(id)arg2;
-(CGPoint*)decodeCGPointForKey:(id)arg1;
-(CGSize*)decodeCGSizeForKey:(id)arg1;
-(CGRect*)decodeCGRectForKey:(id)arg1;
-(id)decodeStringForKey:(id)arg1;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
-(unsigned long long)decodeUInt64ForKey:(id)arg1;

@end

