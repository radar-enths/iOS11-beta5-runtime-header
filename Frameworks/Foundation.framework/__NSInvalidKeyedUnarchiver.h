/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSInvalidKeyedUnarchiver : NSKeyedUnarchiver {
    NSError * _error;
}

- (Class)classForClassName:(id)arg1;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodePropertyListForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id*)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)finishDecoding;
- (id)initWithError:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;

@end