// /*
// The MIT License (MIT)

// Copyright © 2021 Sojan James

// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and 
// associated documentation files (the “Software”), to deal in the Software without restriction, 
// including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all copies or substantial 
// portions of the Software.

// THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT 
// NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
// */

#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(dead_code)]

use core::ops::{Deref, DerefMut};
use std::{ffi::c_void, path::PathBuf};

// include!("s1ap/rs/bindings.rs");
pub mod s1ap;

#[cfg(test)]
mod tests {
    use super::*;
    use std::ffi::c_void;

    fn new_context() -> asn_struct_ctx_t {
        let ctx_struct: asn_struct_ctx_t = asn_struct_ctx_t {
            phase: 0,
            step: 0,
            context: 0,
            ptr: std::ptr::null_mut(),
            left: 0i64,
        };
        ctx_struct
    }
}
