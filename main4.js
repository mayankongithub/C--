import { createSlice } from '@reduxjs/toolkit';

export const counterSlice = createSlice({
    name: 'counter',
    initialState: {
        value: 0
    },
    reducers: {
        // Add your reducer functions here
    }
});

export const {} = counterSlice.actions;
export default counterSlice.reducer;